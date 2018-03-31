# Runner
一个横版跑路游戏原型

使用UE4.18创建    
<br />

玩家点击鼠标跑动，点击频率越快，跑得越快

玩家可以按空格跳跃

玩家跑动和跳跃要消耗能量，能量耗尽后就不能再跑或跳

路上有一些胶囊可以增加（黄色）或减少（红色）玩家的能量

目前来看它还很无聊      

<br />


动画蓝图在AnimStarterPack下，其余资源都在Runner目录下。

当时想用AnimStarterPack里的资源，就把它加进来了，然后想着动画蓝图和动画关系比较大，所以就放到里面了。结果AnimStarterPack里的资源不合适，啥也没用着。          
<br />

Runner下

  - Level是关卡。实际使用的是DefaultLevel
  
  - Material是材质。
  
  - Phy是一个物理材质，没有实际使用
  
  - StaticMesh下是静态网格
  
  
  
  - Runner下的Blueprint是各种蓝图
 
  - GameMode里现在还没什么实际的东西
  
  - RunnerController是角色的Controller。也没有实际内容。
  
  - RunnerCharacter是角色，详情见下文
  
  - RunnerStates是玩家状态枚举，现在只有Idle和Run
  
  - EnergyCapsule是能量胶囊。玩家碰到后，会根据生成胶囊时随机到的配置，来增/减玩家的能量
  
  - CapsuleConfigs是能量胶囊配置结构体
  
  - test没有用到     
  <br />
  
  
  
  UI目录下是UI，现在玩家的能量还是数字显示的，之后想改成进度条  
  <br />
  
  
  Road目录下是路块的蓝图，其中
  
  - BaseRoad是所有路块的基类。包含两个用来检测玩家的碰撞体，用来表示移动速度的变量xSpeed，一个用来生成能量胶囊的函数，一个移动路块的事件
    
  - NormalRoad是平地
    
  - Pit是陷阱。把Pit设置成红色一开始只是为了调试，但发现红色的地块可以提醒玩家前面有坑，于是就留着这个设计了
    
  - EnergyCapsulePlaceholder是一个SceneComponent，用来表示EnergyCapsule的Spawn位置
    
      - 把它添加到BaseRoad的子类里，就能让这个路块在创建的时候，在EnergyCapsulePlaceholder的位置随机Spawn一个EnergyCapsule了
      
      - 它里面最重要的是capsuleTypes数组，这个数组成员是CapsuleConfigs，里面记录了每种胶囊加/减的能量，胶囊颜色，生成概率。
      
      - 加/减的能量是0时，表示不生成胶囊。其他4个配置有两个是加能量两个是减能量
      
      - possibility值除以数组中各元素possibility之和才是生成该配置胶囊的真正概率
      
      - 胶囊被生成后就被挂在路块下了
      
      - 这里目录结构比较乱，EnergyCapsulePlaceholder在这里，EnergyCapsule和CapsuleConfigs却在上级目录
      
  - Generater用来生成路块，并根据玩家的移动速度来移动路块  
  <br />
    
    
    
  RunnerCharacter
  
   - 玩家是不动的，在RunnerCharacter里计算好速度后，RunnerCharacter就会让关卡里的Generater调用所有路块的移动事件
    
   - 点击鼠标时，Controller会调用RunnerCharacter的OnRunClick事件，该事件会先计算两次点击的时间间隔，然后根据这个间隔来计算加速度和最大速度
    
   - 在计算加速度时，从静止开始的第一次点击，加速的时间是单独设置的。
    
   - 开始连续点击后，加速时间就是距离上一次点击的时间间隔，这样玩家点的越快，就越难维持当前的加速度（当然点的越快加速度就越大）
    
   - 加速时间是通过Timer实现的
    
   - 玩家一旦没能量，就开始减速
    
   - 最大速度也是和点击速度有关的，点的越快最大速度越大。但最大速度不受能量影响
    
   - 减速时，如果当前速度小于等于最大速度，则按一个减速度来减速，如果大于最大速度，则按另一个较大的减速度来减速。
    
   - 减速规则结合最大速度不受能量影响，则玩家在能量耗光时点击鼠标是可以更慢的减速的。我还不清楚这是不是一个好的设计。
    
   - 玩家只要在运动就会消耗能量，但能量消耗速度是恒定的，这样玩家想跑的更远就要点鼠标点的更快。
    
   - 跑的更快可能会让玩家更难控制人物，错过一些胶囊
    
   - 跳跃消耗能量
    
   - 玩家能二段跳，但貌似有Bug，玩家可以在空中的跳跃次数不受限制。现在二段跳消耗的能量和一段跳一样，我现在还没有动机让二段跳能量消耗更高  
   <br />
    
    
    
TODO

  - 加入更多EnergyCapsulePlaceholder
  
  - 加入更多种类的路块，如果还能想出新花样的话
  
  - 加入游戏结束机制：KillZ；玩家能量耗光且停止移动后游戏结束
  
  - 记录玩家移动距离，在游戏结束后显示给玩家。或许还能保存最高距离
  
  - 数值还要调节，玩家加速太难，能量消耗太快
  
  
    
    
    
    
    

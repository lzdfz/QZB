import rclpy
from rclpy.node import Node
from fq.msg import Header, ActorControlInfos,ActorControlInfo, ActorHitInfos ,ActorAirplanes, ActorBuildings, ActorDroneSwarms, ActorVehicles, ActorWarships, ActorZones
from geometry_msgs.msg import Point

class MyNode(Node):
    def __init__(self):
        super().__init__('my_node')
        self.publisher_ = self.create_publisher(ActorControlInfos, 'fq/drone_swarm_control_info', 10)
        self.subscription = self.create_subscription(
            ActorDroneSwarms,
            'fq/drone_swarm', 
            self.listener_callback,
            10)
        self.subscription

    def listener_callback(self, drone_swarm_msg):
        self.get_logger().info('我收到了: "%s"' % drone_swarm_msg)
        # 这里可以添加更多的处理逻辑
        # 算法返回控制结果
        # 返回控制逻辑
        drone_swarm_test_path = [[-2500.0, -305.0, 50.0], [-1700.0, -305.0, 50.0], [-1270.0, -106.0, 10.0]]      
        drone_swarm_test_heading = [0.0, 0.0, 0.0]  
        
        drone_swarms_control = ActorControlInfos()
        drone_swarms_control.header = drone_swarm_msg.header

        for drone_swarm in drone_swarm_msg.drone_swarms:
            _id = drone_swarm.base_data.id
            drone_swarm_control = ActorControlInfo()
            drone_swarm_control.id = _id
            drone_swarm_control.target_positions = [Point(x=i[0], y=i[1], z=min(drone_swarm.drone_swarm_kinematics_data.location.z, drone_swarm.attributes.limit_height)) for i in drone_swarm_test_path]
            drone_swarm_control.target_velocity = drone_swarm.attributes.max_velocity
            drone_swarm_control.max_velocity = drone_swarm.attributes.max_velocity
            drone_swarm_control.target_headings = drone_swarm_test_heading
            drone_swarms_control.control_info.append(drone_swarm_control)
        self.publisher_.publish(drone_swarms_control)
        # 这里为了避免多次控制，可删除
        exit()
def main(args=None):
    rclpy.init(args=args)
    my_node = MyNode()
    rclpy.spin(my_node)
    my_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

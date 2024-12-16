import time
from api import FqTopic, API
from fq.msg import ActorDroneSwarms, ActorControlInfos, ActorControlInfo

def demo(args=None):
    API.init(args)

    # 1.注册回调
    def dron_swarm_callback(msg):
        dron_swarm_control = ActorControlInfos()
        dron_swarm_control.header = msg.header
        # for dron_swarm in msg.drone_swarms:
        #     print('base_data', dron_swarm.base_data)
        #     print('attributes', dron_swarm.attributes)
        #     print('drone_swarm_kinematics_data', dron_swarm.drone_swarm_kinematics_data)
        #     print('load_data', dron_swarm.load_data)
        #     print('reconnaissance_data', dron_swarm.reconnaissance_data)
        #     print('interference_data', dron_swarm.interference_data)
        #     print('#'*50)
            # TODO: Fill in the fields of the control message based on the received message
        
        API.get_logger().info(f'dron_swarm_callback received dron swarm param')

    API.register_callback(FqTopic.dron_swarm_param, dron_swarm_callback)

    # 2.主动获取
    while True:
        dron_swarm_msg = API.next_dron_swarm_param()
        # if dron_swarm_msg is not None:
            # dron_swarm_callback(dron_swarm_msg)
        time.sleep(5)
        API.get_logger().info(f'received dron swarm')

        dron_swarm_control = ActorControlInfos()
        dron_swarm_control.header = dron_swarm_msg.header
        API.publish_control_command(dron_swarm_control)
        API.get_logger().info(f'published dron swarm control')
    API.destory()

def main(args=None):
    demo(args)

if __name__ == '__main__':
    main()

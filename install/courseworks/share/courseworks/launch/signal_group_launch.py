import os
from ament_index_python import get_package_share_directory 
from launch import LaunchDescription 
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import TextSubstitution, LaunchConfiguration
from launch_ros.actions import PushRosNamespace

def generate_launch_description():

    signal_ns_launch = DeclareLaunchArgument(
        'signal_group', default_value=TextSubstitution(text='my_signal')
    )

    signal_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory('courseworks'),
                'launch/signal_launch.py'
            )
        )
    )

    signal_group_launch = GroupAction(
        actions=[
            PushRosNamespace(LaunchConfiguration('signal_group')), 
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource(
                    os.path.join(
                        get_package_share_directory('courseworks'),
                        'launch/signal_launch.py'
                    )
                )
            )
        ]
    )

    l_d = LaunchDescription([signal_ns_launch, signal_launch, signal_group_launch])
    return l_d
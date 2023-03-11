#include "ros/ros.h"
#include "std_msgs/Odometry.h"

#include <sstream>


void OdomCallback(const nav_msgs::Odometry::ConstPtr& msg){
  double x = msg->pose.pose.position.x;
  double y = msg->pose.pose.position.y;
	ROS_INFO("x: %f, y: %f",x,y);
}

int main(int argc, char **argv)
{
 
ros::init(argc, argv, "location");

 
ros::NodeHandle nh;

ros::Subscriber sub = nh.subscribe ("odom", 10, OdobCallback);

ros::spin();



  return 0;
}


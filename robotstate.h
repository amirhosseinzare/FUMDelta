#ifndef ROBOTSTATE_H
#define ROBOTSTATE_H


class RobotState
{
public:
    static RobotState* getInstance();
    void getAngles(double angles[]);
    void setAngles(double angle_0,double angle_1,double angle_2,double angle_3);
    double getX();
    double getY();
    double getZ();
    void setPositons(double x,double y,double z);
    void setAllCoordinates(double angle_0, double angle_1, double angle_2,double angle_3, double x, double y, double z);
private:
    static RobotState* instance;
    RobotState();

    double drive_0_angle;
    double drive_1_angle;
    double drive_2_angle;
    double drive_3_angle;

    double x,y,z;
};

#endif // ROBOTSTATE_H

#ifndef DOOR_H
#define DOOR_H

#include <GL/glut.h>
#include <cmath>
class Door{
    public :
        Door();
        ~Door();

        void draw_solid();
        void update(bool open);
        void set_open_out(bool set);

        bool is_broken();
        void break_off(double x_val, double y_val, double z_val);
        void set_position(double x_val, double y_val, double z_val);
    private :
        double width;
        double height;
        double depth;
        bool open_out;
        int open_angle;
        double open_speed;
        double current_angle;
        double rel_x;
        double rel_y;
        double rel_z;
        bool free;
        double pitch;
};

#endif

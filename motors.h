#ifndef MOTORS_H
#define MOTORS_H


class motors
{
    public:
        motors();
        void aim(double* location);
        void open();
        void close();
        void rest();
        virtual ~motors();
    protected:
    private:
};

#endif // MOTORS_H

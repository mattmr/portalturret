#ifndef SERIAL_H
#define SERIAL_H


class serial
{
    public:
        serial();
        int send(char x, char* buffer);//send commands from buffer
        int listen(char sensor);//see if sensors are returning info
        int get(char x, char* buffer);//get value from sensor
        virtual ~serial();
    protected:
    private:
};

#endif // SERIAL_H

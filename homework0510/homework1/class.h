#ifndef __CLASS_H
#define __CLASS_H

class calculate;
class circle{
    private:
        int x;
        int y;
        int radius;
    public:
        circle();
        circle(int x,int y,int r);
        ~circle();
    friend class calculate;
       
};
class calculate{
    public:
        calculate();
        ~calculate();
        void section(circle &c1,circle &c2);
        double distance(circle &c1,circle &c2);

};


#endif
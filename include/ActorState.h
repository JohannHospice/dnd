#ifndef ACTORSTATE_H
#define ACTORSTATE_H


class ActorState
{
    public:
        ActorState();
        virtual ~ActorState();

        int Getdirection() { return direction; }
        void Setdirection(int val) { direction = val; }

    protected:

    private:
        int direction;
};

#endif // ACTORSTATE_H

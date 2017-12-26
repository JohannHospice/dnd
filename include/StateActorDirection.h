#ifndef STATEACTORDIRECTION_H
#define STATEACTORDIRECTION_H

class StateActorDirection {
public:
    explicit StateActorDirection(Direction direction);

    StateActorDirection();

    static enum Direction {
        UP = '^', DOWN = 'V', LEFT = '<', RIGHT = '>'
    };

    const Direction getState() const;

    void setState(Direction val);

    const bool operator==(StateActorDirection const &b) const;

protected:

private:
    Direction state;
};

#endif // STATEACTORDIRECTION_H

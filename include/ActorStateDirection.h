#ifndef DND_ACTORSTATEDIRECTION_H
#define DND_ACTORSTATEDIRECTION_H

class ActorStateDirection {
public:
    enum Direction {
        UP = '^', DOWN = 'V', LEFT = '<', RIGHT = '>'
    };

    explicit ActorStateDirection(Direction direction);

    ActorStateDirection();

    const Direction getState() const;

    void setState(Direction val);

    const bool operator==(ActorStateDirection const &b) const;

protected:

private:
    Direction _direction;
};

#endif // DND_ACTORSTATEDIRECTION_H

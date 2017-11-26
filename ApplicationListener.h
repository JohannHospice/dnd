//
// Created by karibukai on 25/11/17.
//

#ifndef DND_APPLICATIONLISTENER_H
#define DND_APPLICATIONLISTENER_H


class ApplicationListener {
public:
    virtual void create() = 0;

    virtual void render() = 0;

    virtual void dispose() = 0;

    virtual const bool isRunning() const = 0;
};


#endif //DND_APPLICATIONLISTENER_H

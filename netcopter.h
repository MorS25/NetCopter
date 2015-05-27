
// NetCopter
// Control software for Internet-connected hobby aircraft
// Written by Tyler Filla

#ifndef NETCOPTER_H
#define NETCOPTER_H

class NetCopter;
class NetCopterModule;
class NetCopterService;
class NetCopterDriver;
class NetCopterOperation;

class NetCopter {
    public:
        void loadModule(const NetCopterModule& module);
};

class NetCopterModule {
    public:
        virtual void bootstrap(const NetCopter& netCopter) = 0;
};

class NetCopterService {
};

class NetCopterDriver: public NetCopterService {
};

class NetCopterOperation: public NetCopterService {
};

#endif // #ifndef NETCOPTER_H

import os, glob
from binding import *


def genKHR_h(api, outputdir):
    
    # explicit listing of all khr api files is prefered over globbing the khr api directory

    khrapi = "khrapi/"
    templates = [ 
        "AbstractFunction.h",
        "AbstractValue.h",
        "callbacks.h",
        "Function.h",
        "Function.hpp",
        "logging.h",
        "ProcAddress.h",
        "SharedBitfield.h",
        "SharedBitfield.hpp",
        "State.h",
        "Value.h",
        "Value.hpp",
        "Version.h" ]

    for of in templates:
        
        t = template(khrapi + of).replace("%a", api).replace("%A", api.upper())
        status(outputdir + of)

        with open(outputdir + of, 'w') as file:
            file.write(t)


def genKHR_cpp(api, outputdir):
    
    # explicit listing of all khr api files is prefered over globbing the khr api directory

    khrapi = "khrapi/"
    templates = [ 
        "AbstractFunction.cpp",
        "AbstractValue.cpp",
        "Binding.cpp",
        "callbacks.cpp",
        "callbacks_private.h",
        "logging.cpp",
        "logging_private.h",
        "RingBuffer.h",
        "RingBuffer.hpp",
        "State.cpp",
        "Value.cpp",
        "Version.cpp" ]

    for of in templates:
        
        t = template(khrapi + of).replace("%a", api).replace("%A", api.upper())
        status(outputdir + of)

        with open(outputdir + of, 'w') as file:
            file.write(t)

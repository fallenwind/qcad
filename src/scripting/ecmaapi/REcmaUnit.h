

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMAUNIT_H
        #define RECMAUNIT_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RUnit.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaUnit {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        formatLinear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        formatScientific
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        formatDecimal
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        formatEngineering
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        formatArchitectural
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        formatFractional
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimTrailingZeroes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        formatAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isMetric
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        convert
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFactorToM
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        unitToSymbol
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        unitToName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        doubleToString
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RUnit* getSelf(const QString& fName, QScriptContext* context)
    ;static RUnit* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    
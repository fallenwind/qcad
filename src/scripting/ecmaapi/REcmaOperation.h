

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMAOPERATION_H
        #define RECMAOPERATION_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "ROperation.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaOperation {

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
        apply
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEntityTypeFilter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setRecordAffectedObjects
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSpatialIndexDisabled
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static ROperation* getSelf(const QString& fName, QScriptContext* context)
    ;static ROperation* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    
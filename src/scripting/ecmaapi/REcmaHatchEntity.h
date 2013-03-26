

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMAHATCHENTITY_H
        #define RECMAHATCHENTITY_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RHatchEntity.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaHatchEntity {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBoundaryVector
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setComponent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        exportEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPainterPaths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getComplexity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        newLoop
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addBoundary
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSolid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLoopCount
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLoopBoundary
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExploded
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RHatchEntity* getSelf(const QString& fName, QScriptContext* context)
    ;static RHatchEntity* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    
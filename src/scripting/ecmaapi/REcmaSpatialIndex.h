

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMASPATIALINDEX_H
        #define RECMASPATIALINDEX_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RSpatialIndex.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaSpatialIndex {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRRequireHeap(QScriptContext *context,
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
        getSIId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPos
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addToIndex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeFromIndex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryIntersected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryContained
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryNearestNeighbor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RSpatialIndex* getSelf(const QString& fName, QScriptContext* context)
    ;static RSpatialIndex* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    
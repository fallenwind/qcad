

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is not copyable.
        
        #ifndef RECMAORTHOGRID_H
        #define RECMAORTHOGRID_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "ROrthoGrid.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaOrthoGrid {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRGrid(QScriptContext *context,
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
        clearCache
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        snapToGrid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        update
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintMetaGrid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintCursor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintRuler
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getInfoText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIdealSpacing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isIsometric
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setIsometric
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProjection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProjection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getIdealGridSpacing
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isFractionalFormat
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static ROrthoGrid* getSelf(const QString& fName, QScriptContext* context)
    ;static ROrthoGrid* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    
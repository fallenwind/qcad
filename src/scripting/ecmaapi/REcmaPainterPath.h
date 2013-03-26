

    // ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
            // ***** This class is copyable.
        
        #ifndef RECMAPAINTERPATH_H
        #define RECMAPAINTERPATH_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RPainterPath.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaPainterPath {

        public:
      static  void init(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQPainterPath(QScriptContext *context,
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
        getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        lineTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        quadTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        cubicTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        containsPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addArc
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addSpline
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addRect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getZLevel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setZLevel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBrush
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBrush
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMode
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setHighlighted
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isHighlighted
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSelected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSelected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFixedPenColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isFixedPenColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFixedBrushColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isFixedBrushColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setAutoRegen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAutoRegen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFeatureSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFeatureSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPixelSizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPixelSizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistanceTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        transform
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getElementCount
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getXAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getYAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTypeAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isEmpty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RPainterPath* getSelf(const QString& fName, QScriptContext* context)
    ;static RPainterPath* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumMode(QScriptEngine* engine, const RPainterPath::Mode& value)
    ;static  void fromScriptValueEnumMode(const QScriptValue& value, RPainterPath::Mode& out)
    ;};
    #endif
    
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#ifndef Q_ZARMOUR_H
#define Q_ZARMOUR_H

#include "qczmq.h"

class QT_CZMQ_EXPORT QZarmour : public QObject
{
    Q_OBJECT
public:

    //  Copy-construct to return the proper wrapped c types
    QZarmour (zarmour_t *self, QObject *qObjParent = 0);

    //  Create a new zarmour.
    explicit QZarmour (QObject *qObjParent = 0);

    //  Destroy the zarmour.
    ~QZarmour ();

    //  Print properties of object
    void print ();

    //  Get printable string for mode.
    const QString modeStr ();

    //  Encode a stream of bytes into an armoured string.
    QString encode (const byte *data, size_t dataSize);

    //  Decode an armoured string into a string of bytes.          
    //  The decoded output is null-terminated, so it may be treated
    //  as a string, if that's what it was prior to encoding.      
    byte * decode (const QString &data, size_t *decodeSize);

    //  Get the mode property.
    zarmour_mode_t mode ();

    //  Set the mode property.
    void setMode (zarmour_mode_t mode);

    //  Return true if padding is turned on.
    bool pad ();

    //  Turn padding on or off. Default is on.
    void setPad (bool pad);

    //  Get the padding character.
    char padChar ();

    //  Set the padding character.
    void setPadChar (char padChar);

    //  Return if splitting output into lines is turned on. Default is off.
    bool lineBreaks ();

    //  Turn splitting output into lines on or off.
    void setLineBreaks (bool lineBreaks);

    //  Get the line length used for splitting lines.
    size_t lineLength ();

    //  Set the line length used for splitting lines.
    void setLineLength (size_t lineLength);

    //  Self test of this class
    static void test (bool verbose);

    zarmour_t *self;
};
#endif //  Q_ZARMOUR_H
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
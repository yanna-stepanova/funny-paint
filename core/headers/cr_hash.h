#ifndef CR_HASH
#define CR_HASH


inline uint qHash (const QPoint & _key)
{
    return  qHash ( _key.x() ^ _key.y () );
}

#endif // CR_HASH


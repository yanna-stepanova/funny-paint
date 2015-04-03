<<<<<<< HEAD
#ifndef CR_HASH
#define CR_HASH


inline uint qHash (const QPoint & _key)
{
    return  qHash ( _key.x() * _key.y () );
}

#endif // CR_HASH

=======
#ifndef CR_HASH
#define CR_HASH


inline uint qHash (const QPoint & _key)
{
    return  qHash ( _key.x() * _key.y () );
}

#endif // CR_HASH

>>>>>>> f597d05907c73b3f8c7fd2bf9a965464802a01ab

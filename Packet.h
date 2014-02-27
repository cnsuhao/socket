/* 
 * File:   Packet.h
 * Author: Vicky.H
 * Email:  eclipser@163.com
 *
 * Created on 2014年3月3日, 下午10:01
 */

#ifndef CN_VICKY__PACKET_H
#define	CN_VICKY__PACKET_H

typedef unsigned short PacketID_t;

#define PACKET_HEADER_SIZE (sizeof(PacketID_t)+sizeof(unsigned short)+sizeof(unsigned int))


#define PACK_COMPART "$-$"//封包分隔符
#define PACK_COMPART_SIZE strlen(PACK_COMPART)

class SocketInputStream;
class SocketOutputStream;

class Packet {
public:
    virtual bool Read(SocketInputStream& iStream) = 0;

    virtual bool Write(SocketOutputStream& oStream) const = 0;
};


#endif	/* CN_VICKY__PACKET_H */


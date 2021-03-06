/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@class NSData;

@interface _NMRMediaRemoteSetStateMessageProfobuf : PBCodable <NSCopying> {
    NSData *_applicationInfo;
    NSData *_digest;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int state : 1; 
    } _has;
    NSData *_nowPlayingInfo;
    NSData *_payload;
    int _state;
    NSData *_supportedCommands;
    double _timestamp;
}

@property(retain) NSData * applicationInfo;
@property(retain) NSData * digest;
@property(readonly) BOOL hasApplicationInfo;
@property(readonly) BOOL hasDigest;
@property(readonly) BOOL hasNowPlayingInfo;
@property(readonly) BOOL hasPayload;
@property BOOL hasState;
@property(readonly) BOOL hasSupportedCommands;
@property BOOL hasTimestamp;
@property(retain) NSData * nowPlayingInfo;
@property(retain) NSData * payload;
@property int state;
@property(retain) NSData * supportedCommands;
@property double timestamp;

- (void).cxx_destruct;
- (id)applicationInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)digest;
- (BOOL)hasApplicationInfo;
- (BOOL)hasDigest;
- (BOOL)hasNowPlayingInfo;
- (BOOL)hasPayload;
- (BOOL)hasState;
- (BOOL)hasSupportedCommands;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingInfo;
- (id)payload;
- (BOOL)readFrom:(id)arg1;
- (void)setApplicationInfo:(id)arg1;
- (void)setDigest:(id)arg1;
- (void)setHasState:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSupportedCommands:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (int)state;
- (id)supportedCommands;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end

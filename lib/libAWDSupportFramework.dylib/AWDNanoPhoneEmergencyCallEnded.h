/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNanoPhoneEmergencyCallEnded : PBCodable <NSCopying> {
    BOOL  _callConnected;
    unsigned long long  _callDuration;
    BOOL  _callFailed;
    struct { 
        unsigned int callDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int callConnected : 1; 
        unsigned int callFailed : 1; 
        unsigned int remoteEnded : 1; 
        unsigned int userEnded : 1; 
    }  _has;
    BOOL  _remoteEnded;
    unsigned long long  _timestamp;
    BOOL  _userEnded;
}

@property (nonatomic) BOOL callConnected;
@property (nonatomic) unsigned long long callDuration;
@property (nonatomic) BOOL callFailed;
@property (nonatomic) BOOL hasCallConnected;
@property (nonatomic) BOOL hasCallDuration;
@property (nonatomic) BOOL hasCallFailed;
@property (nonatomic) BOOL hasRemoteEnded;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUserEnded;
@property (nonatomic) BOOL remoteEnded;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL userEnded;

- (BOOL)callConnected;
- (unsigned long long)callDuration;
- (BOOL)callFailed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCallConnected;
- (BOOL)hasCallDuration;
- (BOOL)hasCallFailed;
- (BOOL)hasRemoteEnded;
- (BOOL)hasTimestamp;
- (BOOL)hasUserEnded;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)remoteEnded;
- (void)setCallConnected:(BOOL)arg1;
- (void)setCallDuration:(unsigned long long)arg1;
- (void)setCallFailed:(BOOL)arg1;
- (void)setHasCallConnected:(BOOL)arg1;
- (void)setHasCallDuration:(BOOL)arg1;
- (void)setHasCallFailed:(BOOL)arg1;
- (void)setHasRemoteEnded:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUserEnded:(BOOL)arg1;
- (void)setRemoteEnded:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserEnded:(BOOL)arg1;
- (unsigned long long)timestamp;
- (BOOL)userEnded;
- (void)writeTo:(id)arg1;

@end

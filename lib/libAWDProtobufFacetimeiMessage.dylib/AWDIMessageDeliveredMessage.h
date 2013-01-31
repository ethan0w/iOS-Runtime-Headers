/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
 */

@class NSString;

@interface AWDIMessageDeliveredMessage : PBCodable  {
    unsigned long long _timestamp;
    unsigned int _deliveryDuration;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deliveryDuration : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasDeliveryDuration;
@property unsigned int deliveryDuration;


- (void)setHasDeliveryDuration:(BOOL)arg1;
- (void)setDeliveryDuration:(unsigned int)arg1;
- (unsigned int)deliveryDuration;
- (BOOL)hasDeliveryDuration;
- (BOOL)hasGuid;
- (void)setGuid:(id)arg1;
- (id)guid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (id)dictionaryRepresentation;

@end

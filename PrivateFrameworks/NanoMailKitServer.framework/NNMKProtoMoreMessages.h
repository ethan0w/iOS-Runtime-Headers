/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMoreMessages : PBCodable <NSCopying> {
    NSMutableArray * _addedMessages;
    NSData * _dateForRequestingMoreMessages;
    NSData * _dateSynced;
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    }  _has;
}

@property (nonatomic, retain) NSMutableArray *addedMessages;
@property (nonatomic, retain) NSData *dateForRequestingMoreMessages;
@property (nonatomic, retain) NSData *dateSynced;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) BOOL hasDateForRequestingMoreMessages;
@property (nonatomic, readonly) BOOL hasDateSynced;
@property (nonatomic) BOOL hasFullSyncVersion;

- (void).cxx_destruct;
- (void)addAddedMessage:(id)arg1;
- (id)addedMessageAtIndex:(unsigned int)arg1;
- (id)addedMessages;
- (unsigned int)addedMessagesCount;
- (void)clearAddedMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateForRequestingMoreMessages;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (BOOL)hasDateForRequestingMoreMessages;
- (BOOL)hasDateSynced;
- (BOOL)hasFullSyncVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAddedMessages:(id)arg1;
- (void)setDateForRequestingMoreMessages:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end

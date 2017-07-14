/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMessagesFilteredOutWarning : PBCodable <NSCopying> {
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    }  _has;
    NSMutableArray * _removedMessageIds;
}

@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic, retain) NSMutableArray *removedMessageIds;

- (void).cxx_destruct;
- (void)addRemovedMessageId:(id)arg1;
- (void)clearRemovedMessageIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (BOOL)hasFullSyncVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)removedMessageIdAtIndex:(unsigned int)arg1;
- (id)removedMessageIds;
- (unsigned int)removedMessageIdsCount;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(BOOL)arg1;
- (void)setRemovedMessageIds:(id)arg1;
- (void)writeTo:(id)arg1;

@end

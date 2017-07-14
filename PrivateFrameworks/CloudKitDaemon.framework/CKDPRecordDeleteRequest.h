/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordDeleteRequest : PBRequest <NSCopying> {
    NSString * _etag;
    NSMutableArray * _pluginFields;
    CKDPRecordIdentifier * _recordIdentifier;
}

@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) BOOL hasEtag;
@property (nonatomic, readonly) BOOL hasRecordIdentifier;
@property (nonatomic, retain) NSMutableArray *pluginFields;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;

+ (id)options;
+ (Class)pluginFieldsType;

- (void).cxx_destruct;
- (void)addPluginFields:(id)arg1;
- (void)clearPluginFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (BOOL)hasEtag;
- (BOOL)hasRecordIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pluginFields;
- (id)pluginFieldsAtIndex:(unsigned int)arg1;
- (unsigned int)pluginFieldsCount;
- (BOOL)readFrom:(id)arg1;
- (id)recordIdentifier;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setEtag:(id)arg1;
- (void)setPluginFields:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

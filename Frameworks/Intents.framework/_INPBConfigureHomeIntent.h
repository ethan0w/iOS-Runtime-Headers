/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBConfigureHomeIntent : PBCodable <NSCopying> {
    NSMutableArray * _entities;
    _INPBIntentMetadata * _intentMetadata;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *entities;
@property (nonatomic, readonly) BOOL hasIntentMetadata;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (Class)entitiesType;
+ (id)options;

- (void).cxx_destruct;
- (void)addEntities:(id)arg1;
- (void)clearEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entities;
- (id)entitiesAtIndex:(unsigned int)arg1;
- (unsigned int)entitiesCount;
- (BOOL)hasIntentMetadata;
- (unsigned int)hash;
- (id)intentMetadata;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end

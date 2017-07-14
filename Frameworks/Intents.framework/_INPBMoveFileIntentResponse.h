/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBMoveFileIntentResponse : PBCodable <NSCopying> {
    _INPBString * _destinationName;
    NSMutableArray * _entityNames;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _entityTypes;
    struct { 
        unsigned int overwrite : 1; 
        unsigned int success : 1; 
    }  _has;
    BOOL  _overwrite;
    _INPBString * _sourceName;
    BOOL  _success;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBString *destinationName;
@property (nonatomic, retain) NSMutableArray *entityNames;
@property (nonatomic, readonly) int*entityTypes;
@property (nonatomic, readonly) unsigned int entityTypesCount;
@property (nonatomic, readonly) BOOL hasDestinationName;
@property (nonatomic) BOOL hasOverwrite;
@property (nonatomic, readonly) BOOL hasSourceName;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL overwrite;
@property (nonatomic, retain) _INPBString *sourceName;
@property (nonatomic) BOOL success;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (Class)entityNameType;
+ (id)options;

- (void).cxx_destruct;
- (int)StringAsEntityTypes:(id)arg1;
- (void)addEntityName:(id)arg1;
- (void)addEntityType:(int)arg1;
- (void)clearEntityNames;
- (void)clearEntityTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationName;
- (id)dictionaryRepresentation;
- (id)entityNameAtIndex:(unsigned int)arg1;
- (id)entityNames;
- (unsigned int)entityNamesCount;
- (int)entityTypeAtIndex:(unsigned int)arg1;
- (int*)entityTypes;
- (id)entityTypesAsString:(int)arg1;
- (unsigned int)entityTypesCount;
- (BOOL)hasDestinationName;
- (BOOL)hasOverwrite;
- (BOOL)hasSourceName;
- (BOOL)hasSuccess;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)overwrite;
- (BOOL)readFrom:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setEntityNames:(id)arg1;
- (void)setEntityTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setHasOverwrite:(BOOL)arg1;
- (void)setHasSuccess:(BOOL)arg1;
- (void)setOverwrite:(BOOL)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSuccess:(BOOL)arg1;
- (id)sourceName;
- (BOOL)success;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end

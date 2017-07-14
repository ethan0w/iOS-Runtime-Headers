/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSlotResolutionResult : PBCodable <NSCopying> {
    _INPBPayloadConfirmation * _PayloadConfirmation;
    _INPBPayloadNeedsDisambiguation * _PayloadNeedsDisambiguation;
    _INPBPayloadNeedsValue * _PayloadNeedsValue;
    _INPBPayloadSuccess * _PayloadSuccess;
    _INPBPayloadUnsupported * _PayloadUnsupported;
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBPayloadConfirmation *PayloadConfirmation;
@property (nonatomic, retain) _INPBPayloadNeedsDisambiguation *PayloadNeedsDisambiguation;
@property (nonatomic, retain) _INPBPayloadNeedsValue *PayloadNeedsValue;
@property (nonatomic, retain) _INPBPayloadSuccess *PayloadSuccess;
@property (nonatomic, retain) _INPBPayloadUnsupported *PayloadUnsupported;
@property (nonatomic, readonly) BOOL hasPayloadConfirmation;
@property (nonatomic, readonly) BOOL hasPayloadNeedsDisambiguation;
@property (nonatomic, readonly) BOOL hasPayloadNeedsValue;
@property (nonatomic, readonly) BOOL hasPayloadSuccess;
@property (nonatomic, readonly) BOOL hasPayloadUnsupported;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (void).cxx_destruct;
- (id)PayloadConfirmation;
- (id)PayloadNeedsDisambiguation;
- (id)PayloadNeedsValue;
- (id)PayloadSuccess;
- (id)PayloadUnsupported;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPayloadConfirmation;
- (BOOL)hasPayloadNeedsDisambiguation;
- (BOOL)hasPayloadNeedsValue;
- (BOOL)hasPayloadSuccess;
- (BOOL)hasPayloadUnsupported;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setPayloadConfirmation:(id)arg1;
- (void)setPayloadNeedsDisambiguation:(id)arg1;
- (void)setPayloadNeedsValue:(id)arg1;
- (void)setPayloadSuccess:(id)arg1;
- (void)setPayloadUnsupported:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end

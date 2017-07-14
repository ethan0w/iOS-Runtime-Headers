/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRRegisterForGameControllerEventsMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int inputModeFlags : 1; 
    }  _has;
    int  _inputModeFlags;
}

@property (nonatomic) BOOL hasInputModeFlags;
@property (nonatomic) int inputModeFlags;

- (int)StringAsInputModeFlags:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasInputModeFlags;
- (unsigned int)hash;
- (int)inputModeFlags;
- (id)inputModeFlagsAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasInputModeFlags:(BOOL)arg1;
- (void)setInputModeFlags:(int)arg1;
- (void)writeTo:(id)arg1;

@end
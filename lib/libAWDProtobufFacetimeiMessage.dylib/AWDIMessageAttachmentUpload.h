/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
 */

@class NSString;

@interface AWDIMessageAttachmentUpload : PBCodable  {
    unsigned long long _timestamp;
    unsigned int _attachmentSize;
    unsigned int _connectionType;
    int _fzError;
    int _genericError;
    NSString *_guid;
    int _linkQuality;
    unsigned int _messageError;
    unsigned int _tokenError;
    unsigned int _uploadDuration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int attachmentSize : 1; 
        unsigned int connectionType : 1; 
        unsigned int fzError : 1; 
        unsigned int genericError : 1; 
        unsigned int linkQuality : 1; 
        unsigned int messageError : 1; 
        unsigned int tokenError : 1; 
        unsigned int uploadDuration : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasFzError;
@property int fzError;
@property BOOL hasMessageError;
@property unsigned int messageError;
@property BOOL hasTokenError;
@property unsigned int tokenError;
@property BOOL hasGenericError;
@property int genericError;
@property BOOL hasUploadDuration;
@property unsigned int uploadDuration;
@property BOOL hasLinkQuality;
@property int linkQuality;
@property BOOL hasConnectionType;
@property unsigned int connectionType;
@property BOOL hasAttachmentSize;
@property unsigned int attachmentSize;


- (void)setHasUploadDuration:(BOOL)arg1;
- (void)setUploadDuration:(unsigned int)arg1;
- (unsigned int)uploadDuration;
- (BOOL)hasUploadDuration;
- (void)setHasAttachmentSize:(BOOL)arg1;
- (void)setHasTokenError:(BOOL)arg1;
- (void)setHasMessageError:(BOOL)arg1;
- (void)setHasFzError:(BOOL)arg1;
- (void)setAttachmentSize:(unsigned int)arg1;
- (unsigned int)attachmentSize;
- (BOOL)hasAttachmentSize;
- (void)setTokenError:(unsigned int)arg1;
- (unsigned int)tokenError;
- (BOOL)hasTokenError;
- (void)setMessageError:(unsigned int)arg1;
- (unsigned int)messageError;
- (BOOL)hasMessageError;
- (void)setFzError:(int)arg1;
- (int)fzError;
- (BOOL)hasFzError;
- (void)setHasLinkQuality:(BOOL)arg1;
- (void)setHasGenericError:(BOOL)arg1;
- (void)setLinkQuality:(int)arg1;
- (int)linkQuality;
- (BOOL)hasLinkQuality;
- (void)setGenericError:(int)arg1;
- (BOOL)hasGenericError;
- (void)setHasConnectionType:(BOOL)arg1;
- (BOOL)hasConnectionType;
- (BOOL)hasGuid;
- (void)setGuid:(id)arg1;
- (int)genericError;
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
- (void)setConnectionType:(unsigned int)arg1;
- (unsigned int)connectionType;
- (id)dictionaryRepresentation;

@end

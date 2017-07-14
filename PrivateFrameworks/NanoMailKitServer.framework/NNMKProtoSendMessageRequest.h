/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoSendMessageRequest : PBRequest <NSCopying> {
    NSString * _body;
    NSMutableArray * _ccs;
    NSString * _composedMessageId;
    struct { 
        unsigned int sendingType : 1; 
        unsigned int includeAttachments : 1; 
    }  _has;
    BOOL  _includeAttachments;
    NSString * _referenceMessageId;
    unsigned int  _sendingType;
    NSString * _subject;
    NSMutableArray * _tos;
}

@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) NSMutableArray *ccs;
@property (nonatomic, retain) NSString *composedMessageId;
@property (nonatomic, readonly) BOOL hasBody;
@property (nonatomic, readonly) BOOL hasComposedMessageId;
@property (nonatomic) BOOL hasIncludeAttachments;
@property (nonatomic, readonly) BOOL hasReferenceMessageId;
@property (nonatomic) BOOL hasSendingType;
@property (nonatomic, readonly) BOOL hasSubject;
@property (nonatomic) BOOL includeAttachments;
@property (nonatomic, retain) NSString *referenceMessageId;
@property (nonatomic) unsigned int sendingType;
@property (nonatomic, retain) NSString *subject;
@property (nonatomic, retain) NSMutableArray *tos;

- (void).cxx_destruct;
- (void)addCc:(id)arg1;
- (void)addTo:(id)arg1;
- (id)body;
- (id)ccAtIndex:(unsigned int)arg1;
- (id)ccs;
- (unsigned int)ccsCount;
- (void)clearCcs;
- (void)clearTos;
- (id)composedMessageId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBody;
- (BOOL)hasComposedMessageId;
- (BOOL)hasIncludeAttachments;
- (BOOL)hasReferenceMessageId;
- (BOOL)hasSendingType;
- (BOOL)hasSubject;
- (unsigned int)hash;
- (BOOL)includeAttachments;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)referenceMessageId;
- (unsigned int)sendingType;
- (void)setBody:(id)arg1;
- (void)setCcs:(id)arg1;
- (void)setComposedMessageId:(id)arg1;
- (void)setHasIncludeAttachments:(BOOL)arg1;
- (void)setHasSendingType:(BOOL)arg1;
- (void)setIncludeAttachments:(BOOL)arg1;
- (void)setReferenceMessageId:(id)arg1;
- (void)setSendingType:(unsigned int)arg1;
- (void)setSubject:(id)arg1;
- (void)setTos:(id)arg1;
- (id)subject;
- (id)toAtIndex:(unsigned int)arg1;
- (id)tos;
- (unsigned int)tosCount;
- (void)writeTo:(id)arg1;

@end

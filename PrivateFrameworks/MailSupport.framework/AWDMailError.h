/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailError : PBCodable <NSCopying> {
    int  _errorCode;
    long long  _genericErrorCode;
    struct { 
        unsigned int genericErrorCode : 1; 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic) int errorCode;
@property (nonatomic) long long genericErrorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasGenericErrorCode;

- (int)StringAsErrorCode:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorCodeAsString:(int)arg1;
- (long long)genericErrorCode;
- (BOOL)hasErrorCode;
- (BOOL)hasGenericErrorCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setGenericErrorCode:(long long)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasGenericErrorCode:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSpatialLookupBatchResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    }  _has;
    NSMutableArray * _responses;
    int  _statusCode;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic, retain) NSMutableArray *responses;
@property (nonatomic) int statusCode;

+ (Class)responseType;

- (int)StringAsStatusCode:(id)arg1;
- (void)addResponse:(id)arg1;
- (void)clearResponses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)responseAtIndex:(unsigned int)arg1;
- (id)responses;
- (unsigned int)responsesCount;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setResponses:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

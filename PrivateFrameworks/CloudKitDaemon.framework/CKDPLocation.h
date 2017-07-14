/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLocation : PBCodable <NSCopying> {
    CKDPLocationBound * _bounds;
    CKDPLocationCoordinate * _coordinate;
}

@property (nonatomic, retain) CKDPLocationBound *bounds;
@property (nonatomic, retain) CKDPLocationCoordinate *coordinate;
@property (nonatomic, readonly) BOOL hasBounds;
@property (nonatomic, readonly) BOOL hasCoordinate;

- (void).cxx_destruct;
- (id)bounds;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBounds;
- (BOOL)hasCoordinate;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)writeTo:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDRoadAccessInfo : PBCodable <NSCopying> {
    NSMutableArray * _roadAccessPoints;
}

@property (nonatomic, retain) NSMutableArray *roadAccessPoints;

+ (id)roadAccessInfoForPlaceData:(id)arg1;
+ (Class)roadAccessPointType;

- (void)addRoadAccessPoint:(id)arg1;
- (void)clearRoadAccessPoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)roadAccessPointAtIndex:(unsigned int)arg1;
- (id)roadAccessPoints;
- (unsigned int)roadAccessPointsCount;
- (void)setRoadAccessPoints:(id)arg1;
- (void)writeTo:(id)arg1;

@end

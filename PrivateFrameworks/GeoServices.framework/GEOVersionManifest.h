/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVersionManifest : PBCodable <NSCopying> {
    NSMutableArray * _serviceVersions;
}

@property (nonatomic, retain) NSMutableArray *serviceVersions;

+ (Class)serviceVersionType;

- (void)addServiceVersion:(id)arg1;
- (void)clearServiceVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serviceVersionAtIndex:(unsigned int)arg1;
- (id)serviceVersions;
- (unsigned int)serviceVersionsCount;
- (void)setServiceVersions:(id)arg1;
- (void)writeTo:(id)arg1;

@end

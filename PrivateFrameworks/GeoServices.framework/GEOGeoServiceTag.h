/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOGeoServiceTag : PBCodable  {
    int _serviceType;
    NSString *_tag;
}

@property int serviceType;
@property(retain) NSString * tag;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (int)serviceType;
- (void)setServiceType:(int)arg1;
- (id)dictionaryRepresentation;
- (id)tag;
- (void)setTag:(id)arg1;

@end

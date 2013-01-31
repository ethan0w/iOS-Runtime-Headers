/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlaceSearchRequest, NSMutableArray, GEOLocation;

@interface GEOWaypoint : PBCodable  {
    NSMutableArray *_entryPoints;
    GEOLocation *_location;
    GEOPlaceSearchRequest *_placeSearchRequest;
}

@property(readonly) BOOL hasPlaceSearchRequest;
@property(retain) GEOPlaceSearchRequest * placeSearchRequest;
@property(readonly) BOOL hasLocation;
@property(retain) GEOLocation * location;
@property(retain) NSMutableArray * entryPoints;


- (void)setLocation:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithLocation:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasLocation;
- (id)entryPoints;
- (id)entryPointAtIndex:(unsigned int)arg1;
- (void)clearEntryPoints;
- (unsigned int)entryPointsCount;
- (void)addEntryPoint:(id)arg1;
- (void)setEntryPoints:(id)arg1;
- (id)locationForWaypoint;
- (id)placeSearchRequest;
- (BOOL)hasPlaceSearchRequest;
- (void)setPlaceSearchRequest:(id)arg1;
- (id)dictionaryRepresentation;
- (id)location;

@end

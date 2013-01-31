/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlace, NSString, NSMutableArray, GEOAddress;

@interface GEOPlaceResult : PBCodable  {
    double _confidence;
    NSMutableArray *_additionalPlaces;
    NSMutableArray *_namedFeatures;
    GEOPlace *_place;
    NSString *_quad;
    NSString *_suggestedQuery;
    GEOAddress *_tokenEntity;
    NSMutableArray *_unmatchedStrings;
    struct { 
        unsigned int confidence : 1; 
    } _has;
}

@property(retain) GEOPlace * place;
@property BOOL hasConfidence;
@property double confidence;
@property(retain) NSMutableArray * additionalPlaces;
@property(readonly) BOOL hasSuggestedQuery;
@property(retain) NSString * suggestedQuery;
@property(readonly) BOOL hasTokenEntity;
@property(retain) GEOAddress * tokenEntity;
@property(readonly) BOOL hasQuad;
@property(retain) NSString * quad;
@property(retain) NSMutableArray * unmatchedStrings;
@property(retain) NSMutableArray * namedFeatures;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (id)namedFeatures;
- (id)unmatchedStrings;
- (id)additionalPlaces;
- (void)setHasConfidence:(BOOL)arg1;
- (id)namedFeatureAtIndex:(unsigned int)arg1;
- (void)clearNamedFeatures;
- (unsigned int)namedFeaturesCount;
- (id)unmatchedStringAtIndex:(unsigned int)arg1;
- (void)clearUnmatchedStrings;
- (unsigned int)unmatchedStringsCount;
- (BOOL)hasQuad;
- (id)tokenEntity;
- (BOOL)hasTokenEntity;
- (id)suggestedQuery;
- (BOOL)hasSuggestedQuery;
- (id)additionalPlaceAtIndex:(unsigned int)arg1;
- (void)clearAdditionalPlaces;
- (unsigned int)additionalPlacesCount;
- (void)setConfidence:(double)arg1;
- (BOOL)hasConfidence;
- (id)place;
- (void)addNamedFeature:(id)arg1;
- (void)addUnmatchedString:(id)arg1;
- (void)addAdditionalPlace:(id)arg1;
- (void)setNamedFeatures:(id)arg1;
- (void)setUnmatchedStrings:(id)arg1;
- (void)setQuad:(id)arg1;
- (void)setTokenEntity:(id)arg1;
- (void)setSuggestedQuery:(id)arg1;
- (void)setAdditionalPlaces:(id)arg1;
- (void)setPlace:(id)arg1;
- (id)dictionaryRepresentation;
- (id)quad;
- (double)confidence;

@end

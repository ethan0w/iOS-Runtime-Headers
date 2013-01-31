/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOMapQueryCollectionRequest : PBRequest  {
    NSMutableArray *_requestElements;
}

@property(retain) NSMutableArray * requestElements;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (id)requestElements;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)requestElementsAtIndex:(unsigned int)arg1;
- (void)clearRequestElements;
- (unsigned int)requestElementsCount;
- (void)addRequestElements:(id)arg1;
- (void)setRequestElements:(id)arg1;
- (id)dictionaryRepresentation;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelResponse : NSObject {
    MPPropertySet * _deferredItemProperties;
    MPPropertySet * _deferredSectionProperties;
    MPModelRequest * _request;
    MPSectionedCollection * _results;
    BOOL  _valid;
}

@property (nonatomic, retain) MPPropertySet *deferredItemProperties;
@property (nonatomic, retain) MPPropertySet *deferredSectionProperties;
@property (nonatomic, readonly, copy) MPModelRequest *request;
@property (nonatomic, copy) MPSectionedCollection *results;
@property (getter=isValid, nonatomic, readonly) BOOL valid;

- (void).cxx_destruct;
- (void)_invalidate;
- (id)debugDescription;
- (id)deferredItemProperties;
- (id)deferredSectionProperties;
- (id)description;
- (void)getChangeDetailsFromPreviousResponse:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (BOOL)isValid;
- (id)request;
- (id)results;
- (void)setDeferredItemProperties:(id)arg1;
- (void)setDeferredSectionProperties:(id)arg1;
- (void)setResults:(id)arg1;

@end

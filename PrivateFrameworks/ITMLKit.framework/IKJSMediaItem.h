/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSMediaItem : IKJSObject <IKJSMediaItem> {
    IKAppMediaItemBridge * _bridge;
    NSNumber * _resumeTime;
}

@property (nonatomic, retain) NSString *artworkImageURL;
@property (nonatomic, readonly) IKAppMediaItemBridge *bridge;
@property (nonatomic, retain) NSString *contentRatingDomain;
@property (nonatomic, retain) NSNumber *contentRatingRanking;
@property (nonatomic, retain) NSString *description;
@property (nonatomic, retain) NSString *externalID;
@property (nonatomic, retain) NSArray *highlightGroups;
@property (nonatomic, retain) NSArray *interstitials;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) NSNumber *resumeTime;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *url;

- (void).cxx_destruct;
- (id)artworkImageURL;
- (id)bridge;
- (double)contentProposalAutomaticAcceptanceInterval;
- (double)contentProposalPresentationTime;
- (id)contentRatingDomain;
- (id)contentRatingRanking;
- (void)dealloc;
- (id)description;
- (id)externalID;
- (id)highlightGroups;
- (id)initWithType:(id)arg1 :(id)arg2;
- (id)interstitials;
- (BOOL)isExplicit;
- (void)loadCertificateDataForURI:(id)arg1 withCallback:(id /* block */)arg2;
- (void)loadContentIdentifierDataForURI:(id)arg1 withCallback:(id /* block */)arg2;
- (void)loadKeyDataForURI:(id)arg1 requestData:(id)arg2 withCallback:(id /* block */)arg3;
- (id)metadata;
- (id)ratingBadge;
- (id)resumeTime;
- (void)setArtworkImageURL:(id)arg1;
- (void)setContentProposalAutomaticAcceptanceInterval:(double)arg1;
- (void)setContentProposalPresentationTime:(double)arg1;
- (void)setContentRatingDomain:(id)arg1;
- (void)setContentRatingRanking:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setHighlightGroups:(id)arg1;
- (void)setInterstitials:(id)arg1;
- (void)setIsExplicit:(BOOL)arg1;
- (void)setMetadata:(id)arg1;
- (void)setRatingBadge:(id)arg1;
- (void)setResumeTime:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)type;
- (id)url;

@end

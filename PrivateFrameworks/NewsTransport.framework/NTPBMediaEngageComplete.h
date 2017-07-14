/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBMediaEngageComplete : PBCodable <NSCopying> {
    BOOL  _adSupportedChannel;
    NSString * _articleId;
    NSData * _articleSessionId;
    int  _articleType;
    NSData * _articleViewingSessionId;
    int  _backendArticleVersion;
    int  _feedCellSection;
    NSString * _feedId;
    int  _feedType;
    NSData * _feedViewExposureId;
    struct { 
        unsigned int mediaDuration : 1; 
        unsigned int mediaTimePlayed : 1; 
        unsigned int personalizationTreatmentId : 1; 
        unsigned int articleType : 1; 
        unsigned int backendArticleVersion : 1; 
        unsigned int feedCellSection : 1; 
        unsigned int feedType : 1; 
        unsigned int mediaPlayLocation : 1; 
        unsigned int mediaType : 1; 
        unsigned int publisherArticleVersion : 1; 
        unsigned int adSupportedChannel : 1; 
        unsigned int isDigitalReplicaAd : 1; 
        unsigned int isUserSubscribedToFeed : 1; 
        unsigned int isVideoInFeed : 1; 
    }  _has;
    BOOL  _isDigitalReplicaAd;
    BOOL  _isUserSubscribedToFeed;
    BOOL  _isVideoInFeed;
    long long  _mediaDuration;
    NSString * _mediaId;
    int  _mediaPlayLocation;
    long long  _mediaTimePlayed;
    int  _mediaType;
    NSMutableArray * _namedEntities;
    long long  _personalizationTreatmentId;
    int  _publisherArticleVersion;
    NSString * _referencedArticleId;
    NSString * _sectionHeadlineId;
    NSString * _sourceChannelId;
    NSString * _surfacedByChannelId;
    NSString * _surfacedBySectionId;
    NSString * _surfacedByTopicId;
}

@property (nonatomic) BOOL adSupportedChannel;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleSessionId;
@property (nonatomic) int articleType;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic) int backendArticleVersion;
@property (nonatomic) int feedCellSection;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic, readonly) BOOL hasArticleId;
@property (nonatomic, readonly) BOOL hasArticleSessionId;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic, readonly) BOOL hasArticleViewingSessionId;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) BOOL hasFeedCellSection;
@property (nonatomic, readonly) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic, readonly) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasIsDigitalReplicaAd;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL hasIsVideoInFeed;
@property (nonatomic) BOOL hasMediaDuration;
@property (nonatomic, readonly) BOOL hasMediaId;
@property (nonatomic) BOOL hasMediaPlayLocation;
@property (nonatomic) BOOL hasMediaTimePlayed;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic, readonly) BOOL hasReferencedArticleId;
@property (nonatomic, readonly) BOOL hasSectionHeadlineId;
@property (nonatomic, readonly) BOOL hasSourceChannelId;
@property (nonatomic, readonly) BOOL hasSurfacedByChannelId;
@property (nonatomic, readonly) BOOL hasSurfacedBySectionId;
@property (nonatomic, readonly) BOOL hasSurfacedByTopicId;
@property (nonatomic) BOOL isDigitalReplicaAd;
@property (nonatomic) BOOL isUserSubscribedToFeed;
@property (nonatomic) BOOL isVideoInFeed;
@property (nonatomic) long long mediaDuration;
@property (nonatomic, retain) NSString *mediaId;
@property (nonatomic) int mediaPlayLocation;
@property (nonatomic) long long mediaTimePlayed;
@property (nonatomic) int mediaType;
@property (nonatomic, retain) NSMutableArray *namedEntities;
@property (nonatomic) long long personalizationTreatmentId;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic, retain) NSString *sectionHeadlineId;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *surfacedByChannelId;
@property (nonatomic, retain) NSString *surfacedBySectionId;
@property (nonatomic, retain) NSString *surfacedByTopicId;

+ (Class)namedEntitiesType;

- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (int)StringAsFeedCellSection:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsMediaType:(id)arg1;
- (BOOL)adSupportedChannel;
- (void)addNamedEntities:(id)arg1;
- (id)articleId;
- (id)articleSessionId;
- (int)articleType;
- (id)articleTypeAsString:(int)arg1;
- (id)articleViewingSessionId;
- (int)backendArticleVersion;
- (void)clearNamedEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedCellSection;
- (id)feedCellSectionAsString:(int)arg1;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (BOOL)hasAdSupportedChannel;
- (BOOL)hasArticleId;
- (BOOL)hasArticleSessionId;
- (BOOL)hasArticleType;
- (BOOL)hasArticleViewingSessionId;
- (BOOL)hasBackendArticleVersion;
- (BOOL)hasFeedCellSection;
- (BOOL)hasFeedId;
- (BOOL)hasFeedType;
- (BOOL)hasFeedViewExposureId;
- (BOOL)hasIsDigitalReplicaAd;
- (BOOL)hasIsUserSubscribedToFeed;
- (BOOL)hasIsVideoInFeed;
- (BOOL)hasMediaDuration;
- (BOOL)hasMediaId;
- (BOOL)hasMediaPlayLocation;
- (BOOL)hasMediaTimePlayed;
- (BOOL)hasMediaType;
- (BOOL)hasPersonalizationTreatmentId;
- (BOOL)hasPublisherArticleVersion;
- (BOOL)hasReferencedArticleId;
- (BOOL)hasSectionHeadlineId;
- (BOOL)hasSourceChannelId;
- (BOOL)hasSurfacedByChannelId;
- (BOOL)hasSurfacedBySectionId;
- (BOOL)hasSurfacedByTopicId;
- (unsigned int)hash;
- (BOOL)isDigitalReplicaAd;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUserSubscribedToFeed;
- (BOOL)isVideoInFeed;
- (long long)mediaDuration;
- (id)mediaId;
- (int)mediaPlayLocation;
- (long long)mediaTimePlayed;
- (int)mediaType;
- (id)mediaTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namedEntities;
- (id)namedEntitiesAtIndex:(unsigned int)arg1;
- (unsigned int)namedEntitiesCount;
- (long long)personalizationTreatmentId;
- (int)publisherArticleVersion;
- (BOOL)readFrom:(id)arg1;
- (id)referencedArticleId;
- (id)sectionHeadlineId;
- (void)setAdSupportedChannel:(BOOL)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleSessionId:(id)arg1;
- (void)setArticleType:(int)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setBackendArticleVersion:(int)arg1;
- (void)setFeedCellSection:(int)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setHasAdSupportedChannel:(BOOL)arg1;
- (void)setHasArticleType:(BOOL)arg1;
- (void)setHasBackendArticleVersion:(BOOL)arg1;
- (void)setHasFeedCellSection:(BOOL)arg1;
- (void)setHasFeedType:(BOOL)arg1;
- (void)setHasIsDigitalReplicaAd:(BOOL)arg1;
- (void)setHasIsUserSubscribedToFeed:(BOOL)arg1;
- (void)setHasIsVideoInFeed:(BOOL)arg1;
- (void)setHasMediaDuration:(BOOL)arg1;
- (void)setHasMediaPlayLocation:(BOOL)arg1;
- (void)setHasMediaTimePlayed:(BOOL)arg1;
- (void)setHasMediaType:(BOOL)arg1;
- (void)setHasPersonalizationTreatmentId:(BOOL)arg1;
- (void)setHasPublisherArticleVersion:(BOOL)arg1;
- (void)setIsDigitalReplicaAd:(BOOL)arg1;
- (void)setIsUserSubscribedToFeed:(BOOL)arg1;
- (void)setIsVideoInFeed:(BOOL)arg1;
- (void)setMediaDuration:(long long)arg1;
- (void)setMediaId:(id)arg1;
- (void)setMediaPlayLocation:(int)arg1;
- (void)setMediaTimePlayed:(long long)arg1;
- (void)setMediaType:(int)arg1;
- (void)setNamedEntities:(id)arg1;
- (void)setPersonalizationTreatmentId:(long long)arg1;
- (void)setPublisherArticleVersion:(int)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setSectionHeadlineId:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setSurfacedByChannelId:(id)arg1;
- (void)setSurfacedBySectionId:(id)arg1;
- (void)setSurfacedByTopicId:(id)arg1;
- (id)sourceChannelId;
- (id)surfacedByChannelId;
- (id)surfacedBySectionId;
- (id)surfacedByTopicId;
- (void)writeTo:(id)arg1;

@end

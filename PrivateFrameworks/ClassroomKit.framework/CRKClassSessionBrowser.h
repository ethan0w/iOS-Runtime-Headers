/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKClassSessionBrowser : NSObject <CATNetworkReachabilityDelegate, CRKClassSessionBeaconBrowserDelegate, CRKSessionDelegate> {
    BOOL  _allowInvitationSessions;
    BOOL  _allowUnenrolledSessions;
    <CRKClassSessionBrowserDelegate> * _delegate;
    NSSet * _enrolledControlGroupIdentifiers;
    <CRKInvitationSessionBrowserDelegate> * _invitationSessionDelegate;
    NSSet * _organizationUUIDs;
    CRKClassSessionBeaconBrowser * mBeaconBrowser;
    NSMutableDictionary * mClassSessionsByIdentifier;
    NSMutableDictionary * mConnectWithoutBeaconAssertionCountByInviteSessionIP;
    NSMutableDictionary * mConnectWithoutBeaconAssertionCountBySessionIdentifier;
    NSMutableDictionary * mInvitationSessionsByIPAddress;
    CATNetworkReachability * mNetworkReachability;
}

@property (nonatomic) BOOL allowInvitationSessions;
@property (nonatomic) BOOL allowUnenrolledSessions;
@property (getter=isBrowsing, nonatomic, readonly) BOOL browsing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKClassSessionBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *enrolledControlGroupIdentifiers;
@property (readonly) unsigned int hash;
@property (nonatomic) <CRKInvitationSessionBrowserDelegate> *invitationSessionDelegate;
@property (nonatomic, copy) NSSet *organizationUUIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acquireConnectWithoutBeaconAssertionForInvitationSessionWithIPAddress:(id)arg1;
- (void)acquireConnectWithoutBeaconAssertionForSessionIdentifier:(id)arg1;
- (BOOL)allowInvitationSessions;
- (BOOL)allowUnenrolledSessions;
- (void)beaconBrowser:(id)arg1 didFailWithError:(id)arg2;
- (void)beaconBrowser:(id)arg1 didFindBeaconForClassSession:(id)arg2 flags:(unsigned short)arg3;
- (void)beaconBrowser:(id)arg1 didFindBeaconForInvitationSessionWithIPAddress:(id)arg2;
- (id)browserStateDictionary;
- (void)classSessionInvalidated:(id)arg1;
- (id)clientIdentityForSession:(id)arg1;
- (void)connectToClassSessionWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delegateClassSessionDidBecomeConnectable:(id)arg1;
- (void)delegateClassSessionDidBecomeNotConnectable:(id)arg1;
- (void)delegateDidFailWithError:(id)arg1;
- (void)delegateDidFindClassSession:(id)arg1 transport:(id)arg2;
- (void)delegateDidFindInvitationSession:(id)arg1 transport:(id)arg2;
- (void)delegateDidRemoveClassSession:(id)arg1;
- (void)delegateDidRemoveInvitationSession:(id)arg1;
- (void)delegateLostConnectionToClassSession:(id)arg1;
- (void)delegateLostConnectionToInvitationSession:(id)arg1;
- (id)delegateNeedsClientIdentityForGroup:(id)arg1;
- (id)delegateNeedsClientIdentityInvitationSession;
- (id)delegateNeedsTrustedAnchorCertificatesForGroup:(id)arg1;
- (id)enrolledControlGroupIdentifiers;
- (id)init;
- (id)invitationSessionDelegate;
- (void)invitationSessionWithIPAddressInvalidated:(id)arg1;
- (BOOL)isBrowsing;
- (void)lostConnectionToClassSession:(id)arg1;
- (void)lostConnectionToInvitationSessionWithIPAddress:(id)arg1;
- (id)organizationUUIDs;
- (void)reachabilityDidChange:(id)arg1;
- (void)releaseConnectWithoutBeaconAssertionForInvitationSessionWithIPAddress:(id)arg1;
- (void)releaseConnectWithoutBeaconAssertionForSessionIdentifier:(id)arg1;
- (void)session:(id)arg1 didConnectWithTransport:(id)arg2;
- (void)session:(id)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
- (void)sessionDidBecomeConnectable:(id)arg1;
- (void)sessionDidBecomeNotConnectable:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (void)sessionDidInvalidate:(id)arg1;
- (void)sessionDidLoseBeacon:(id)arg1;
- (void)setAllowInvitationSessions:(BOOL)arg1;
- (void)setAllowUnenrolledSessions:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnrolledControlGroupIdentifiers:(id)arg1;
- (void)setInvitationSessionDelegate:(id)arg1;
- (void)setOrganizationUUIDs:(id)arg1;
- (void)startBrowsing;
- (id)stateDictionariesByClassSessionIdentifierString;
- (void)stopBrowsing;
- (id)trustedAnchorCertificatesForSession:(id)arg1;
- (void)updateConnectedSessions;
- (void)updateRequiresBeaconFlagForSession:(id)arg1;

@end

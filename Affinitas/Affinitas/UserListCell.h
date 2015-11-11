//
//  UserListCell.h
//  Affinitas
//
//  Created by OnurMac on 11/11/15.
//  Copyright © 2015 Onur Unal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AFUsers.h"

@interface UserListCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *kUserImage;
@property (weak, nonatomic) IBOutlet UILabel *kUserHeader;
@property (weak, nonatomic) IBOutlet UILabel *kUserLocation;

- (instancetype)initWithCustomNibAndController:(UITableViewController *)controller _user:(AFUsers*)user;

-(void)setUserTitle:(AFUsers*)userInfo;
-(void)setLocationTitle:(AFUsers*)userInfo;

@end
//
//  TXWeiboListTableViewCell.m
//  Example
//
//  Created by annidyfeng on 2018/9/25.
//  Copyright © 2018年 annidy. All rights reserved.
//

#import "TXWeiboListTableViewCell.h"
#import "SuperPlayer.h"
#import "UIView+MMLayout.h"

@implementation TXWeiboListTableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state

}

- (void)beginPlay:(UIButton *)sender {
    if (self.cellDelegate) {
        [self.cellDelegate cellStartPlay:self];
    }
}

- (UIButton *)playButton
{
    if (_playButton == nil) {
        _playButton = [UIButton buttonWithType:UIButtonTypeCustom];
        [_playButton setImage:SuperPlayerImage(@"play_btn") forState:UIControlStateNormal];
        [self.contentView addSubview:_playButton];
        [_playButton addTarget:self action:@selector(beginPlay:) forControlEvents:UIControlEventTouchUpInside];
    }
    
    return _playButton;
}

- (void)layoutSubviews
{
    
    self.playButton.m_sizeToFit().m_center();
}

@end
